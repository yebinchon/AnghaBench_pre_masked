
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_size; } ;
struct TYPE_3__ {int hash; } ;
struct index_state {TYPE_1__ oid; int initialized; } ;
struct cache_header {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {scalar_t__ rawsz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 int FUNC_2 (int ,unsigned char*) ;
 int FUNC_3 (char const*,int ) ;
 scalar_t__ FUNC_4 (int,unsigned char*,scalar_t__,scalar_t__) ;
 TYPE_2__* VAR_2 ;

__attribute__((used)) static int FUNC_5(const struct index_state *VAR_3, const char *VAR_4)
{
 int VAR_5;
 ssize_t VAR_6;
 struct stat VAR_7;
 unsigned char VAR_8[VAR_0];

 if (!VAR_3->initialized)
  return 0;

 VAR_5 = FUNC_3(VAR_4, VAR_1);
 if (VAR_5 < 0)
  return 0;

 if (FUNC_1(VAR_5, &VAR_7))
  goto out;

 if (VAR_7.st_size < sizeof(struct cache_header) + VAR_2->rawsz)
  goto out;

 VAR_6 = FUNC_4(VAR_5, VAR_8, VAR_2->rawsz, VAR_7.st_size - VAR_2->rawsz);
 if (VAR_6 != VAR_2->rawsz)
  goto out;

 if (!FUNC_2(VAR_3->oid.hash, VAR_8))
  goto out;

 FUNC_0(VAR_5);
 return 1;

out:
 FUNC_0(VAR_5);
 return 0;
}
