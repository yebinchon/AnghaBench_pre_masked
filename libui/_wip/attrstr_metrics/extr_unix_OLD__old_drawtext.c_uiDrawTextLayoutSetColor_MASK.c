
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uiDrawTextLayout ;
typedef scalar_t__ guint16 ;
typedef int PangoAttribute ;


 int * FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *,int *,int,int) ;
 int * FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;

void FUNC_3(uiDrawTextLayout *VAR_0, int VAR_1, int VAR_2, double VAR_3, double VAR_4, double VAR_5, double VAR_6)
{
 PangoAttribute *VAR_7;
 guint16 VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_8 = (guint16) (VAR_3 * 65535);
 VAR_9 = (guint16) (VAR_4 * 65535);
 VAR_10 = (guint16) (VAR_5 * 65535);
 VAR_11 = (guint16) (VAR_6 * 65535);

 VAR_7 = FUNC_2(VAR_8, VAR_9, VAR_10);
 FUNC_1(VAR_0, VAR_7, VAR_1, VAR_2);


 VAR_7 = FUNC_0(VAR_11);
 if (VAR_7 != ((void*)0))
  FUNC_1(VAR_0, VAR_7, VAR_1, VAR_2);
}
