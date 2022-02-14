
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vas_window {int dummy; } ;
struct coprocessor_status_block {int count; } ;
struct coprocessor_request_block {int ccw; struct coprocessor_status_block csb; } ;
struct nx842_workmem {int start; struct coprocessor_request_block crb; } ;


 int VAR_0 ;
 struct nx842_workmem* FUNC_0 (void*,int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 (unsigned char const*,unsigned int,unsigned char*,unsigned int,struct nx842_workmem*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 struct vas_window* FUNC_9 (int ) ;
 int FUNC_10 (struct coprocessor_request_block*,int ) ;
 int FUNC_11 (struct vas_window*,int ,int) ;
 int FUNC_12 (struct nx842_workmem*,struct coprocessor_status_block*) ;

__attribute__((used)) static int FUNC_13(const unsigned char *VAR_4, unsigned int VAR_5,
      unsigned char *VAR_6, unsigned int *VAR_7,
      void *VAR_8, int VAR_9)
{
 struct coprocessor_request_block *VAR_10;
 struct coprocessor_status_block *VAR_11;
 struct nx842_workmem *VAR_12;
 struct vas_window *VAR_13;
 int VAR_14, VAR_15 = 0;
 u32 VAR_16;
 unsigned int VAR_17 = *VAR_7;

 VAR_12 = FUNC_0(VAR_8, VAR_2);

 *VAR_7 = 0;

 VAR_10 = &VAR_12->crb;
 VAR_11 = &VAR_10->csb;

 VAR_14 = FUNC_5(VAR_4, VAR_5, VAR_6, VAR_17, VAR_12);
 if (VAR_14)
  return VAR_14;

 VAR_16 = 0;
 VAR_16 = FUNC_1(VAR_0, VAR_16, VAR_9);
 VAR_10->ccw = FUNC_3(VAR_16);

 do {
  VAR_12->start = FUNC_4();
  FUNC_7();
  VAR_13 = FUNC_9(VAR_3);





  FUNC_10(VAR_10, 0);





  VAR_14 = FUNC_11(VAR_13, 0, 1);
  FUNC_8();



 } while (VAR_14 && (VAR_15++ < VAR_1));

 if (VAR_14) {
  FUNC_6("VAS copy/paste failed\n");
  return VAR_14;
 }

 VAR_14 = FUNC_12(VAR_12, VAR_11);
 if (!VAR_14)
  *VAR_7 = FUNC_2(VAR_11->count);

 return VAR_14;
}
