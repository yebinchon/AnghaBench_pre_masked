
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,unsigned int) ;
 unsigned int VAR_5 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int ) ;

void FUNC_5(void)
{
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;

 VAR_9 = FUNC_4(VAR_4) & 0x7;
 VAR_7 = FUNC_1(VAR_9);


 VAR_6 = (VAR_7 > VAR_3) ? VAR_3 : VAR_7;
 VAR_8 = VAR_2 + VAR_1 - 3;
 VAR_8 += 4;

 if (VAR_8 < VAR_6)
  VAR_6 = VAR_8;





 if (VAR_6 < VAR_7)
  FUNC_3("kvm: Limiting the IPA size due to kernel %s Address limit\n",
   (VAR_8 < VAR_7) ? "Virtual" : "Physical");

 FUNC_0(VAR_6 < VAR_0,
      "KVM IPA limit (%d bit) is smaller than default size\n", VAR_6);
 VAR_5 = VAR_6;
 FUNC_2("IPA Size Limit: %dbits\n", VAR_5);
}
