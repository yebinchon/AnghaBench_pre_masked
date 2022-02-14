
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ioat_test {int transactions; int chain_depth; int buffer_size; scalar_t__ raw_target; int testkind; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ,struct ioat_test*) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (struct ioat_test*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,int *,int ) ;

__attribute__((used)) static void
FUNC_8(struct ioat_test *VAR_5, int VAR_6, char **VAR_7)
{
 int VAR_8;


 VAR_5->testkind = VAR_3;
 VAR_5->transactions = 1;
 VAR_5->chain_depth = 1;
 VAR_5->buffer_size = 4 * 1024;

 VAR_5->raw_target = FUNC_7(VAR_7[1], ((void*)0), 0);
 if (VAR_5->raw_target == 0) {
  FUNC_6("Target shoudln't be NULL\n");
  FUNC_2(VAR_1);
 }

 if (VAR_6 >= 3) {
  VAR_5->buffer_size = FUNC_0(VAR_7[2]);
  if (VAR_5->buffer_size == 0) {
   FUNC_6("Buffer size must be greater than zero\n");
   FUNC_2(VAR_1);
  }
 }

 VAR_8 = FUNC_4("/dev/ioat_test", VAR_4);
 if (VAR_8 < 0) {
  FUNC_6("Cannot open /dev/ioat_test\n");
  FUNC_2(VAR_0);
 }

 (void)FUNC_3(VAR_8, VAR_2, VAR_5);
 FUNC_1(VAR_8);

 FUNC_2(FUNC_5(VAR_5));
}
