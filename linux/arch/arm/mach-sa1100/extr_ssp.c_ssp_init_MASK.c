
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int ,char*,int *) ;
 int FUNC_3 (int ,int,char*) ;
 int VAR_10 ;

int FUNC_4(void)
{
 int VAR_11;

 if (!(VAR_4 & VAR_5) && (VAR_7 & VAR_3))
  return -VAR_1;

 if (!FUNC_3(FUNC_0(VAR_8), 0x18, "SSP")) {
  return -VAR_0;
 }

 VAR_9 = VAR_6;

 VAR_11 = FUNC_2(VAR_2, VAR_10, 0, "SSP", ((void*)0));
 if (VAR_11)
  goto out_region;

 return 0;

 out_region:
 FUNC_1(FUNC_0(VAR_8), 0x18);
 return VAR_11;
}
