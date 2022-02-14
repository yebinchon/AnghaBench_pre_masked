
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_reader {scalar_t__ file; scalar_t__ fname; scalar_t__ buffer; scalar_t__ fd; int mmapsize; scalar_t__ mmapaddr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct file_reader*,int ,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_5(struct file_reader *VAR_1)
{

 if (VAR_1) {
  if (VAR_1->mmapaddr)
   FUNC_3(VAR_1->mmapaddr, VAR_1->mmapsize);

  if (VAR_1->fd)
   FUNC_0(VAR_1->fd);

  if (VAR_1->buffer)
   FUNC_4(VAR_1->buffer);

  if (VAR_1->file)
   if (VAR_1->file != VAR_0)
    FUNC_1(VAR_1->file, VAR_1->fname);

  if(VAR_1->fname)
   FUNC_4(VAR_1->fname);

  FUNC_2(VAR_1, 0, sizeof(struct file_reader));
 }
}
