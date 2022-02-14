
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* src; int dst; } ;
struct TYPE_7__ {TYPE_3__ refspec; } ;
typedef TYPE_1__ push_spec ;
typedef int git_push ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*,char const*) ;
 scalar_t__ FUNC_6 (TYPE_3__*,char const*,int) ;

__attribute__((used)) static int FUNC_7(git_push *VAR_1, push_spec **VAR_2, const char *VAR_3)
{
 push_spec *VAR_4;

 *VAR_2 = ((void*)0);

 VAR_4 = FUNC_4(1, sizeof(*VAR_4));
 FUNC_0(VAR_4);

 if (FUNC_6(&VAR_4->refspec, VAR_3, 0) < 0) {
  FUNC_5(VAR_0, "invalid refspec %s", VAR_3);
  goto on_error;
 }

 if (VAR_4->refspec.src && VAR_4->refspec.src[0] != '\0' &&
     FUNC_1(VAR_1, VAR_4->refspec.src) < 0) {
  goto on_error;
 }

 if (FUNC_2(VAR_4->refspec.dst) < 0)
  goto on_error;

 *VAR_2 = VAR_4;
 return 0;

on_error:
 FUNC_3(VAR_4);
 return -1;
}
