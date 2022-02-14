
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct debug_view {int dummy; } ;
struct TYPE_3__ {int buf_size; } ;
typedef TYPE_1__ debug_info_t ;


 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 scalar_t__ FUNC_2 (char*,char*,...) ;

__attribute__((used)) static int FUNC_3(debug_info_t *VAR_0, struct debug_view *VAR_1,
         char *VAR_2, const char *VAR_3)
{
 int VAR_4, VAR_5 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_0->buf_size; VAR_4++)
  VAR_5 += FUNC_2(VAR_2 + VAR_5, "%02x ", ((unsigned char *) VAR_3)[VAR_4]);
 VAR_5 += FUNC_2(VAR_2 + VAR_5, "| ");
 for (VAR_4 = 0; VAR_4 < VAR_0->buf_size; VAR_4++) {
  unsigned char VAR_6 = VAR_3[VAR_4];

  if (FUNC_0(VAR_6) && FUNC_1(VAR_6))
   VAR_5 += FUNC_2(VAR_2 + VAR_5, "%c", VAR_6);
  else
   VAR_5 += FUNC_2(VAR_2 + VAR_5, ".");
 }
 VAR_5 += FUNC_2(VAR_2 + VAR_5, "\n");
 return VAR_5;
}
