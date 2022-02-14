
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_4__ {int ipi_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_7(module_t VAR_14, int VAR_15, void *VAR_16)
{
 int VAR_17 = 0;

 switch (VAR_15) {
 case 130:





  VAR_17 = FUNC_5(VAR_5, &VAR_8);
  if (VAR_17 != 0)
   return (VAR_17);
  VAR_12 = VAR_10;
  VAR_11 = FUNC_1(VAR_13,
      VAR_9, ((void*)0), VAR_3);
  break;
 case 129:





  VAR_17 = VAR_2;
  break;
 case 128:
  FUNC_2(&VAR_7);
  if (VAR_7.ipi_count != 0) {
   VAR_17 = VAR_0;
   FUNC_3(&VAR_7);
   break;
  }
  VAR_12 = ((void*)0);
  VAR_17 = FUNC_6(VAR_5, VAR_4, VAR_6);
  FUNC_3(&VAR_7);

  FUNC_4(((void*)0));

  FUNC_0(VAR_13, VAR_11);
  break;
 default:
  VAR_17 = VAR_1;
  break;
 }
 return VAR_17;
}
