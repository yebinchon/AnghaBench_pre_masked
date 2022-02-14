
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,char*,int *) ;

__attribute__((used)) static int FUNC_2(void)
{
 int VAR_5;

 VAR_5 = FUNC_1(VAR_0, VAR_3,
  0, "gdrom_command", &VAR_2);
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_1(VAR_1, VAR_4,
  0, "gdrom_dma", &VAR_2);
 if (VAR_5)
  FUNC_0(VAR_0, &VAR_2);
 return VAR_5;
}
