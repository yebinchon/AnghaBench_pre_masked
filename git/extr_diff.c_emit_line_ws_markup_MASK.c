
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct diff_options {int* output_indicators; unsigned int ws_error_highlight; int file; } ;


 int VAR_0 ;
 char* FUNC_0 (struct diff_options*,int ) ;
 int FUNC_1 (struct diff_options*,char const*,char const*,int,char const*,int,char const*,int) ;
 int FUNC_2 (char const*,int,unsigned int,int ,char const*,char const*,char const*) ;

__attribute__((used)) static void FUNC_3(struct diff_options *VAR_1,
    const char *VAR_2, const char *VAR_3,
    const char *VAR_4,
    int VAR_5, const char *VAR_6, int VAR_7,
    unsigned VAR_8, int VAR_9)
{
 const char *VAR_10 = ((void*)0);
 int VAR_11 = VAR_1->output_indicators[VAR_5];

 if (VAR_1->ws_error_highlight & VAR_8) {
  VAR_10 = FUNC_0(VAR_1, VAR_0);
  if (!*VAR_10)
   VAR_10 = ((void*)0);
 }

 if (!VAR_10 && !VAR_2)
  FUNC_1(VAR_1, VAR_3, ((void*)0), 0, VAR_4, VAR_11, VAR_6, VAR_7);
 else if (!VAR_10) {
  FUNC_1(VAR_1, VAR_2, VAR_3, !!VAR_2, VAR_4, VAR_11, VAR_6, VAR_7);
 } else if (VAR_9)

  FUNC_1(VAR_1, VAR_10, ((void*)0), 0, VAR_4, VAR_11, VAR_6, VAR_7);
 else {

  FUNC_1(VAR_1, VAR_2 ? VAR_2 : VAR_3, ((void*)0), !!VAR_2, VAR_4,
       VAR_11, "", 0);
  FUNC_2(VAR_6, VAR_7, VAR_8,
         VAR_1->file, VAR_3, VAR_4, VAR_10);
 }
}
