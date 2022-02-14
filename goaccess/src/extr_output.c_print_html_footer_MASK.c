
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* html_custom_js; } ;
typedef int FILE ;


 char* VAR_0 ;
 char* VAR_1 ;
 TYPE_1__ VAR_2 ;
 char* VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 char* VAR_4 ;

__attribute__((used)) static void
FUNC_1 (FILE * VAR_5)
{
  FUNC_0 (VAR_5, "<script>%s</script>", VAR_3);
  FUNC_0 (VAR_5, "<script>%s</script>", VAR_4);
  FUNC_0 (VAR_5, "<script>%s</script>", VAR_0);
  FUNC_0 (VAR_5, "<script>%s</script>", VAR_1);


  if (VAR_2.html_custom_js)
    FUNC_0 (VAR_5, "<script src='%s'></script>", VAR_2.html_custom_js);

  FUNC_0 (VAR_5, "</body>");
  FUNC_0 (VAR_5, "</html>");
}
