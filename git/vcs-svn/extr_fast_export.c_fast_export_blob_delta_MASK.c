
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct line_buffer {int dummy; } ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 long FUNC_0 (scalar_t__,struct line_buffer*,char const*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,long) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (char,int ) ;
 int VAR_1 ;
 int FUNC_5 (char*,long) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*) ;

void FUNC_7(uint32_t VAR_3,
    uint32_t VAR_4, const char *VAR_5,
    off_t VAR_6, struct line_buffer *VAR_7)
{
 long VAR_8;

 FUNC_1(VAR_6 >= 0);
 VAR_8 = FUNC_0(VAR_6, VAR_7, VAR_5, VAR_4);
 if (VAR_3 == VAR_0) {
  FUNC_3(&VAR_1, FUNC_6("link "));
  VAR_8 -= FUNC_6("link ");
 }
 FUNC_5("data %ld\n", VAR_8);
 FUNC_2(&VAR_1, VAR_8);
 FUNC_4('\n', VAR_2);
}
