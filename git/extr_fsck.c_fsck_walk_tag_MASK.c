
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tag {int tagged; int object; } ;
struct fsck_options {int (* walk ) (int ,int ,void*,struct fsck_options*) ;} ;


 int VAR_0 ;
 char* FUNC_0 (struct fsck_options*,int *) ;
 scalar_t__ FUNC_1 (struct tag*) ;
 int FUNC_2 (struct fsck_options*,int ,char*,char*) ;
 int FUNC_3 (int ,int ,void*,struct fsck_options*) ;

__attribute__((used)) static int FUNC_4(struct tag *VAR_1, void *VAR_2, struct fsck_options *VAR_3)
{
 char *VAR_4 = FUNC_0(VAR_3, &VAR_1->object);

 if (FUNC_1(VAR_1))
  return -1;
 if (VAR_4)
  FUNC_2(VAR_3, VAR_1->tagged, "%s", VAR_4);
 return VAR_3->walk(VAR_1->tagged, VAR_0, VAR_2, VAR_3);
}
