
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct circ_buf {char* buf; size_t head; } ;
struct TYPE_2__ {struct circ_buf out_crc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct circ_buf*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct circ_buf*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(const char *VAR_3, int VAR_4)
{
 int VAR_5;
 struct circ_buf *VAR_6 = &VAR_2.out_crc;
 int VAR_7;
 char *VAR_8;

 VAR_5 = FUNC_0(VAR_6, VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_5();
 VAR_8 = &VAR_6->buf[VAR_6->head];
 VAR_7 = FUNC_4(VAR_4, FUNC_2(VAR_6));
 FUNC_3(VAR_8, VAR_3, VAR_7);

 FUNC_6();
 VAR_6->head = (VAR_6->head + VAR_7) & (VAR_0 - 1);
 FUNC_1(VAR_1, 1);
 return VAR_7;
}
