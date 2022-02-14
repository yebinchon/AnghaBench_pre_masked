
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {unsigned char* buf; scalar_t__ len; } ;


 int FUNC_0 (unsigned char*,scalar_t__) ;
 int FUNC_1 (struct strbuf*,long,unsigned char*,int) ;
 int FUNC_2 (struct strbuf*,long,int) ;

__attribute__((used)) static int FUNC_3(struct strbuf *VAR_0)
{
 int VAR_1 = 1;
 long VAR_2 = 0;

 for (;;) {
  int VAR_3;
  unsigned char VAR_4;
  unsigned char VAR_5[2];

  VAR_3 = FUNC_0(VAR_0->buf + VAR_2, VAR_0->len - VAR_2);
  if (VAR_3 < 0)
   return VAR_1;
  VAR_2 += VAR_3;
  VAR_1 = 0;
  VAR_4 = VAR_0->buf[VAR_2];
  FUNC_2(VAR_0, VAR_2, 1);


  VAR_5[0] = 0xc0 + (VAR_4 >> 6);
  VAR_5[1] = 0x80 + (VAR_4 & 0x3f);
  FUNC_1(VAR_0, VAR_2, VAR_5, 2);
  VAR_2 += 2;
 }
}
