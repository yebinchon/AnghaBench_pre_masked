
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (int ,unsigned short) ;
 int FUNC_2 (int ,char*,unsigned short) ;
 int FUNC_3 (int ,char*,unsigned short,unsigned long) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

unsigned short FUNC_6(unsigned short VAR_5,
                                   unsigned long VAR_6)
{
 unsigned long VAR_7;
 unsigned short VAR_8;

 FUNC_3(VAR_3,
  "3780i::dsp3780I_ReadMsaCfg entry usDspBaseIO %x ulMsaAddr %lx\n",
  VAR_5, VAR_6);

 FUNC_4(&VAR_4, VAR_7);
 FUNC_1(VAR_1, (unsigned short) VAR_6);
 FUNC_1(VAR_0, (unsigned short) (VAR_6 >> 16));
 VAR_8 = FUNC_0(VAR_2);
 FUNC_5(&VAR_4, VAR_7);

 FUNC_2(VAR_3, "3780i::dsp3780I_ReadMsaCfg exit val %x\n", VAR_8);

 return VAR_8;
}
