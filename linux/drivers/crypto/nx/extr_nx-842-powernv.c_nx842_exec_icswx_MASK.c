
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct coprocessor_status_block {int count; } ;
struct coprocessor_request_block {int ccw; struct coprocessor_status_block csb; } ;
struct nx842_workmem {int start; struct coprocessor_request_block crb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 struct nx842_workmem* FUNC_0 (void*,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 int VAR_7 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,struct coprocessor_request_block*) ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned char const*,unsigned int,unsigned char*,unsigned int,struct nx842_workmem*) ;
 int VAR_8 ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct nx842_workmem*,struct coprocessor_status_block*) ;

__attribute__((used)) static int FUNC_10(const unsigned char *VAR_9, unsigned int VAR_10,
      unsigned char *VAR_11, unsigned int *VAR_12,
      void *VAR_13, int VAR_14)
{
 struct coprocessor_request_block *VAR_15;
 struct coprocessor_status_block *VAR_16;
 struct nx842_workmem *VAR_17;
 int VAR_18;
 u32 VAR_19;
 unsigned int VAR_20 = *VAR_12;

 VAR_17 = FUNC_0(VAR_13, VAR_7);

 *VAR_12 = 0;


 if (!VAR_8) {
  FUNC_8("coprocessor CT is 0");
  return -VAR_4;
 }

 VAR_18 = FUNC_6(VAR_9, VAR_10, VAR_11, VAR_20, VAR_17);
 if (VAR_18)
  return VAR_18;

 VAR_15 = &VAR_17->crb;
 VAR_16 = &VAR_15->csb;


 VAR_19 = 0;
 VAR_19 = FUNC_1(VAR_1, VAR_19, VAR_8);
 VAR_19 = FUNC_1(VAR_0, VAR_19, 0);
 VAR_19 = FUNC_1(VAR_2, VAR_19, VAR_14);

 VAR_17->start = FUNC_5();


 VAR_18 = FUNC_4(FUNC_3(VAR_19), VAR_15);

 FUNC_7("icswx CR %x ccw %x crb->ccw %x\n", VAR_18,
        (unsigned int)VAR_19,
        (unsigned int)FUNC_2(VAR_15->ccw));







 VAR_18 &= ~VAR_6;

 switch (VAR_18) {
 case 129:
  VAR_18 = FUNC_9(VAR_17, VAR_16);
  break;
 case 130:
  FUNC_7("842 Coprocessor busy\n");
  VAR_18 = -VAR_3;
  break;
 case 128:
  FUNC_8("ICSWX rejected\n");
  VAR_18 = -VAR_5;
  break;
 }

 if (!VAR_18)
  *VAR_12 = FUNC_2(VAR_16->count);

 return VAR_18;
}
