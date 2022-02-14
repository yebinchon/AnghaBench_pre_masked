
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7146_format {int pixelformat; } ;
struct saa7146_dev {int dummy; } ;


 int FUNC_0 (struct saa7146_format*) ;
 int FUNC_1 (char*,char*) ;
 struct saa7146_format* VAR_0 ;

struct saa7146_format* FUNC_2(struct saa7146_dev *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0); VAR_3++) {
  if (VAR_0[VAR_3].pixelformat == VAR_2) {
   return VAR_0+VAR_3;
  }
 }

 FUNC_1("unknown pixelformat:'%4.4s'\n", (char *)&VAR_2);
 return ((void*)0);
}
