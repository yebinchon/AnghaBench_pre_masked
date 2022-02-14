
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int **** scatterlist ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,int *****,int,int ) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static void FUNC_2(struct scatterlist *VAR_1, int VAR_2,
    struct scatterlist **VAR_3, int *VAR_4,
    int VAR_5, struct device *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
  FUNC_1(VAR_3[VAR_7]);
 FUNC_1(VAR_4);
 FUNC_1(VAR_3);

 FUNC_0(VAR_6, VAR_1, VAR_5, VAR_0);
}
