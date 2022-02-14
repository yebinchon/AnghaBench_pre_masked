
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
 if (!VAR_0) {
  VAR_0 = 416000;
  FUNC_0("PXA CPU 27x max frequency not defined (pxa27x_maxfreq), assuming pxa271 with %dkHz maxfreq\n",
   VAR_0);
 } else {
  VAR_0 *= 1000;
 }
}
