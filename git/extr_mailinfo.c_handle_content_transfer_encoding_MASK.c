
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct mailinfo {int transfer_encoding; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*) ;

__attribute__((used)) static void FUNC_1(struct mailinfo *VAR_3,
          const struct strbuf *VAR_4)
{
 if (FUNC_0(VAR_4->buf, "base64"))
  VAR_3->transfer_encoding = VAR_0;
 else if (FUNC_0(VAR_4->buf, "quoted-printable"))
  VAR_3->transfer_encoding = VAR_2;
 else
  VAR_3->transfer_encoding = VAR_1;
}
