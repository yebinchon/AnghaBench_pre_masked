
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {char* buf; } ;
struct sliding_view {TYPE_1__ buf; scalar_t__ max_off; } ;
struct line_buffer {int dummy; } ;
typedef int off_t ;
typedef int FILE ;


 struct sliding_view FUNC_0 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 long FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ FUNC_9 (struct sliding_view*,scalar_t__,int) ;
 scalar_t__ FUNC_10 (char const*,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_11 (char*,char const*) ;
 int VAR_2 ;
 int FUNC_12 (scalar_t__,int) ;
 int VAR_3 ;
 int FUNC_13 (TYPE_1__*,char*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (char*) ;
 scalar_t__ FUNC_16 (struct line_buffer*,int ,struct sliding_view*,int *) ;

__attribute__((used)) static long FUNC_17(off_t VAR_4, struct line_buffer *VAR_5,
   const char *VAR_6, uint32_t VAR_7)
{
 long VAR_8;
 struct sliding_view VAR_9 = FUNC_0(&VAR_2, 0);
 FILE *VAR_10;

 if (FUNC_8() || !(VAR_10 = FUNC_3(&VAR_1)))
  FUNC_5("cannot open temporary file for blob retrieval");
 if (VAR_6) {
  const char *VAR_11;
  FUNC_11("cat-blob %s\n", VAR_6);
  FUNC_6(VAR_3);
  VAR_11 = FUNC_7();
  if (FUNC_10(VAR_11, &VAR_9.max_off))
   FUNC_5("invalid cat-blob response: %s", VAR_11);
  FUNC_4(VAR_9.max_off, 1);
 }
 if (VAR_7 == VAR_0) {
  FUNC_13(&VAR_9.buf, "link ");
  FUNC_4(VAR_9.max_off, FUNC_15("link "));
  VAR_9.max_off += FUNC_15("link ");
  FUNC_4(VAR_9.max_off, 1);
 }
 if (FUNC_16(VAR_5, VAR_4, &VAR_9, VAR_10))
  FUNC_5("cannot apply delta");
 if (VAR_6) {

  FUNC_1(!FUNC_12(VAR_9.max_off, 1));
  VAR_9.max_off++;
  if (FUNC_9(&VAR_9, VAR_9.max_off - 1, 1))
   FUNC_5("cannot seek to end of input");
  if (VAR_9.buf.buf[0] != '\n')
   FUNC_5("missing newline after cat-blob response");
 }
 VAR_8 = FUNC_2(&VAR_1);
 if (VAR_8 < 0)
  FUNC_5("cannot read temporary file for blob retrieval");
 FUNC_14(&VAR_9.buf);
 return VAR_8;
}
