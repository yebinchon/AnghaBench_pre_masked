
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct va_format {int dummy; } ;
struct drm_printer {struct drm_print_iterator* arg; } ;
struct drm_print_iterator {size_t remain; scalar_t__ offset; scalar_t__ start; scalar_t__ data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_printer*,char const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t,int) ;
 size_t FUNC_3 (char*,size_t,char*,struct va_format*) ;

void FUNC_4(struct drm_printer *VAR_3, struct va_format *VAR_4)
{
 struct drm_print_iterator *VAR_5 = VAR_3->arg;
 size_t VAR_6;
 char *VAR_7;

 if (!VAR_5->remain)
  return;


 VAR_6 = FUNC_3(((void*)0), 0, "%pV", VAR_4);


 if (VAR_5->offset + VAR_6 <= VAR_5->start) {
  VAR_5->offset += VAR_6;
  return;
 }


 if ((VAR_5->offset >= VAR_5->start) && (VAR_6 < VAR_5->remain)) {
  ssize_t VAR_8 = VAR_5->offset - VAR_5->start;

  FUNC_3(((char *) VAR_5->data) + VAR_8,
   VAR_5->remain, "%pV", VAR_4);

  VAR_5->offset += VAR_6;
  VAR_5->remain -= VAR_6;

  return;
 }





 VAR_7 = FUNC_2(VAR_6 + 1, VAR_0 | VAR_2 | VAR_1);
 if (!VAR_7)
  return;

 FUNC_3(VAR_7, VAR_6 + 1, "%pV", VAR_4);
 FUNC_0(VAR_3, (const char *) VAR_7);

 FUNC_1(VAR_7);
}
