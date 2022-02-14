
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioc_vol {int* vol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,struct ioc_vol*) ;

__attribute__((used)) static int
FUNC_1(int VAR_2, int VAR_3)
{
 struct ioc_vol VAR_4;

 VAR_2 = VAR_2 < 0 ? 0 : VAR_2 > 255 ? 255 : VAR_2;
 VAR_3 = VAR_3 < 0 ? 0 : VAR_3 > 255 ? 255 : VAR_3;

 VAR_4.vol[0] = VAR_2;
 VAR_4.vol[1] = VAR_3;
 VAR_4.vol[2] = 0;
 VAR_4.vol[3] = 0;

 return FUNC_0 (VAR_1, VAR_0, &VAR_4);
}
