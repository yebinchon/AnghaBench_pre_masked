
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* buf; size_t buf_len; } ;
struct rsxx_cardinfo {TYPE_1__ log; } ;
struct creg_cmd {char* buf; int cnt8; int status; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct rsxx_cardinfo*,char*,int) ;
 int FUNC_1 (int,size_t) ;
 int FUNC_2 (struct rsxx_cardinfo*) ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static void FUNC_4(struct rsxx_cardinfo *VAR_2,
        struct creg_cmd *VAR_3,
        int VAR_4)
{
 char *VAR_5;
 char *VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_5 = VAR_3->buf;
 VAR_9 = 0;


 if (VAR_4)
  return;

 while (VAR_9 < VAR_3->cnt8) {
  VAR_6 = &VAR_2->log.buf[VAR_2->log.buf_len];
  VAR_7 = FUNC_1(VAR_3->cnt8 - VAR_9, VAR_1 - VAR_2->log.buf_len);
  VAR_8 = FUNC_3(VAR_6, &VAR_5[VAR_9], VAR_7);

  VAR_9 += VAR_8;
  VAR_2->log.buf_len += VAR_8;





  if ((VAR_6[VAR_8 - 1] == '\0') ||
      (VAR_2->log.buf_len == VAR_1)) {
   if (VAR_2->log.buf_len != 1)
    FUNC_0(VAR_2, VAR_2->log.buf,
        VAR_2->log.buf_len);
   VAR_2->log.buf_len = 0;
  }

 }

 if (VAR_3->status & VAR_0)
  FUNC_2(VAR_2);
}
