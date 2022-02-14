
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct firedtv {int isochannel; int subunit; } ;
struct dvb_frontend {struct firedtv* sec_priv; } ;


 int FUNC_0 (struct firedtv*,int ,int) ;
 int FUNC_1 (struct firedtv*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct firedtv *VAR_1 = VAR_0->sec_priv;

 FUNC_1(VAR_1);
 FUNC_0(VAR_1, VAR_1->subunit, VAR_1->isochannel);
 VAR_1->isochannel = -1;
 return 0;
}
