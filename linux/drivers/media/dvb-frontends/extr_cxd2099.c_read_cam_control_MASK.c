
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_ca_en50221 {struct cxd* data; } ;
struct cxd {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cxd*,int ,unsigned int*) ;
 int FUNC_3 (struct cxd*,int ) ;

__attribute__((used)) static int FUNC_4(struct dvb_ca_en50221 *VAR_0,
       int VAR_1, u8 VAR_2)
{
 struct cxd *VAR_3 = VAR_0->data;
 unsigned int VAR_4;

 FUNC_0(&VAR_3->lock);
 FUNC_3(VAR_3, 0);
 FUNC_2(VAR_3, VAR_2, &VAR_4);
 FUNC_1(&VAR_3->lock);
 return VAR_4;
}
