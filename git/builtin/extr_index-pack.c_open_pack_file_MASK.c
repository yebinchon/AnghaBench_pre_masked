
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_4__ {int pack_fd; } ;
struct TYPE_3__ {int (* init_fn ) (int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct strbuf VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__ VAR_8 ;
 int FUNC_2 (struct strbuf*,char*) ;
 scalar_t__ FUNC_3 (char const*,int,...) ;
 int VAR_9 ;
 char* FUNC_4 (struct strbuf*,int *) ;
 int FUNC_5 (int *) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static const char *FUNC_6(const char *VAR_11)
{
 if (VAR_5) {
  VAR_7 = 0;
  if (!VAR_11) {
   struct strbuf VAR_12 = VAR_4;
   VAR_9 = FUNC_2(&VAR_12,
      "pack/tmp_pack_XXXXXX");
   VAR_11 = FUNC_4(&VAR_12, ((void*)0));
  } else {
   VAR_9 = FUNC_3(VAR_11, VAR_0|VAR_1|VAR_3, 0600);
   if (VAR_9 < 0)
    FUNC_1(FUNC_0("unable to create '%s'"), VAR_11);
  }
  VAR_8.pack_fd = VAR_9;
 } else {
  VAR_7 = FUNC_3(VAR_11, VAR_2);
  if (VAR_7 < 0)
   FUNC_1(FUNC_0("cannot open packfile '%s'"), VAR_11);
  VAR_9 = -1;
  VAR_8.pack_fd = VAR_7;
 }
 VAR_10->init_fn(&VAR_6);
 return VAR_11;
}
