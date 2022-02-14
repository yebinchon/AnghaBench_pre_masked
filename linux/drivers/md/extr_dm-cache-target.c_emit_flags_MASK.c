
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cache_features {int metadata_version; int discard_passdown; scalar_t__ io_mode; } ;
struct cache {struct cache_features features; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct cache*) ;
 scalar_t__ FUNC_3 (struct cache*) ;
 scalar_t__ FUNC_4 (struct cache*) ;
 scalar_t__ FUNC_5 (struct cache*) ;

__attribute__((used)) static void FUNC_6(struct cache *VAR_0, char *VAR_1,
         unsigned VAR_2, ssize_t *VAR_3)
{
 ssize_t VAR_4 = *VAR_3;
 struct cache_features *VAR_5 = &VAR_0->features;
 unsigned VAR_6 = (VAR_5->metadata_version == 2) + !VAR_5->discard_passdown + 1;

 FUNC_0("%u ", VAR_6);

 if (VAR_5->metadata_version == 2)
  FUNC_0("metadata2 ");

 if (FUNC_5(VAR_0))
  FUNC_0("writethrough ");

 else if (FUNC_3(VAR_0))
  FUNC_0("passthrough ");

 else if (FUNC_4(VAR_0))
  FUNC_0("writeback ");

 else {
  FUNC_0("unknown ");
  FUNC_1("%s: internal error: unknown io mode: %d",
        FUNC_2(VAR_0), (int) VAR_5->io_mode);
 }

 if (!VAR_5->discard_passdown)
  FUNC_0("no_discard_passdown ");

 *VAR_3 = VAR_4;
}
