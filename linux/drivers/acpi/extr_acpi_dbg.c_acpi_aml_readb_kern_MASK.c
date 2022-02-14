
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct circ_buf {char* buf; size_t tail; } ;
struct TYPE_2__ {struct circ_buf in_crc; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (struct circ_buf*,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(void)
{
 int VAR_3;
 struct circ_buf *VAR_4 = &VAR_2.in_crc;
 char *VAR_5;

 VAR_3 = FUNC_0(VAR_4, VAR_1);
 if (VAR_3 < 0)
  return VAR_3;

 FUNC_3();
 VAR_5 = &VAR_4->buf[VAR_4->tail];
 VAR_3 = (int)*VAR_5;

 FUNC_2();
 VAR_4->tail = (VAR_4->tail + 1) & (VAR_0 - 1);
 FUNC_1(VAR_1, 1);
 return VAR_3;
}
