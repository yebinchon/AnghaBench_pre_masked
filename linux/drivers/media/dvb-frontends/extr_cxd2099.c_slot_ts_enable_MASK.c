
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_ca_en50221 {struct cxd* data; } ;
struct cxd {int lock; } ;


 int FUNC_0 (struct cxd*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cxd*,int ) ;
 int FUNC_4 (struct cxd*,int,int,int) ;

__attribute__((used)) static int FUNC_5(struct dvb_ca_en50221 *VAR_0, int VAR_1)
{
 struct cxd *VAR_2 = VAR_0->data;

 FUNC_1(&VAR_2->lock);
 FUNC_4(VAR_2, 0x09, 0x00, 0x08);
 FUNC_3(VAR_2, 0);
 FUNC_0(VAR_2, 1);
 FUNC_2(&VAR_2->lock);
 return 0;
}
