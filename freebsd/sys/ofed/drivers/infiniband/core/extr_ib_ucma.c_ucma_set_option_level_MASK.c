
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ucma_context {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct ucma_context*,int,void*,size_t) ;
 int FUNC_1 (struct ucma_context*,int,void*,size_t) ;

__attribute__((used)) static int FUNC_2(struct ucma_context *VAR_1, int VAR_2,
     int VAR_3, void *VAR_4, size_t VAR_5)
{
 int VAR_6;

 switch (VAR_2) {
 case 128:
  VAR_6 = FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5);
  break;
 case 129:
  VAR_6 = FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5);
  break;
 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
