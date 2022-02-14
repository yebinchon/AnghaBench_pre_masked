
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct imap_buffer {int offset; char* buf; int bytes; int sock; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_4(struct imap_buffer *VAR_1, char **VAR_2)
{
 int VAR_3;
 int VAR_4 = VAR_1->offset;

 *VAR_2 = VAR_1->buf + VAR_4;

 for (;;) {

  if (VAR_1->offset + 1 >= VAR_1->bytes) {
   if (VAR_4) {

    *VAR_2 = VAR_1->buf;

    FUNC_0(VAR_4 <= VAR_1->bytes);
    VAR_3 = VAR_1->bytes - VAR_4;

    if (VAR_3)
     FUNC_1(VAR_1->buf, VAR_1->buf + VAR_4, VAR_3);
    VAR_1->offset -= VAR_4;
    VAR_1->bytes = VAR_3;
    VAR_4 = 0;
   }

   VAR_3 = FUNC_3(&VAR_1->sock, VAR_1->buf + VAR_1->bytes,
      sizeof(VAR_1->buf) - VAR_1->bytes);

   if (VAR_3 <= 0)
    return -1;

   VAR_1->bytes += VAR_3;
  }

  if (VAR_1->buf[VAR_1->offset] == '\r') {
   FUNC_0(VAR_1->offset + 1 < VAR_1->bytes);
   if (VAR_1->buf[VAR_1->offset + 1] == '\n') {
    VAR_1->buf[VAR_1->offset] = 0;
    VAR_1->offset += 2;
    if (0 < VAR_0)
     FUNC_2(*VAR_2);
    return 0;
   }
  }

  VAR_1->offset++;
 }

}
