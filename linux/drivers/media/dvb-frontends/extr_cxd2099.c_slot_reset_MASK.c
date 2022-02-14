
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ca_en50221 {struct cxd* data; } ;
struct cxd {int mode; int lock; scalar_t__ ready; int rbuf; scalar_t__ cammode; } ;


 int FUNC_0 (struct cxd*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dvb_ca_en50221*,int,int ,int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct cxd*,int,int) ;
 int FUNC_6 (struct cxd*,int,int,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_ca_en50221 *VAR_0, int VAR_1)
{
 struct cxd *VAR_2 = VAR_0->data;

 if (VAR_2->cammode)
  FUNC_3(VAR_0, VAR_1, VAR_2->rbuf, 0);

 FUNC_1(&VAR_2->lock);
 FUNC_0(VAR_2, 0);
 FUNC_5(VAR_2, 0x00, 0x21);
 FUNC_5(VAR_2, 0x06, 0x1F);
 FUNC_5(VAR_2, 0x00, 0x31);
 FUNC_6(VAR_2, 0x20, 0x80, 0x80);
 FUNC_5(VAR_2, 0x03, 0x02);
 VAR_2->ready = 0;
 VAR_2->mode = -1;
 {
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < 100; VAR_3++) {
   FUNC_4(10000, 11000);
   if (VAR_2->ready)
    break;
  }
 }
 FUNC_2(&VAR_2->lock);
 return 0;
}
