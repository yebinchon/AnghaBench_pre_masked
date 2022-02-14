
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ca_en50221 {struct cxd* data; } ;
struct cxd {int write_busy; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cxd*,int,int *,int) ;
 int FUNC_3 (struct cxd*,int,int) ;

__attribute__((used)) static int FUNC_4(struct dvb_ca_en50221 *VAR_1, int VAR_2, u8 *VAR_3, int VAR_4)
{
 struct cxd *VAR_5 = VAR_1->data;

 if (VAR_5->write_busy)
  return -VAR_0;
 FUNC_0(&VAR_5->lock);
 FUNC_3(VAR_5, 0x0d, VAR_4 >> 8);
 FUNC_3(VAR_5, 0x0e, VAR_4 & 0xff);
 FUNC_2(VAR_5, 0x11, VAR_3, VAR_4);
 VAR_5->write_busy = 1;
 FUNC_1(&VAR_5->lock);
 return VAR_4;
}
