
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (char*,int,int,int) ;
 unsigned long FUNC_1 (int,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(uint32_t VAR_0, int *VAR_1, int *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 unsigned long VAR_6, VAR_7;


 VAR_4 = 128 * VAR_3;
 VAR_5 = VAR_0 * 1000;


 VAR_6 = FUNC_1(VAR_4, VAR_5);

 VAR_4 /= VAR_6;
 VAR_5 /= VAR_6;





 VAR_7 = ((128*VAR_3/1000) + (VAR_4-1))/VAR_4;

 VAR_4 *= VAR_7;
 VAR_5 *= VAR_7;


 if (VAR_4 < (128*VAR_3/1500))
  FUNC_2("Calculated ACR N value is too small. You may experience audio problems.\n");
 if (VAR_4 > (128*VAR_3/300))
  FUNC_2("Calculated ACR N value is too large. You may experience audio problems.\n");

 *VAR_2 = VAR_4;
 *VAR_1 = VAR_5;

 FUNC_0("Calculated ACR timing N=%d CTS=%d for frequency %d\n",
    *VAR_2, *VAR_1, VAR_3);
}
