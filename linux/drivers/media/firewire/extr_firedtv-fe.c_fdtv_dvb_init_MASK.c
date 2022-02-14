
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; } ;
struct firedtv {int device; int isochannel; int subunit; TYPE_1__ adapter; } ;
struct dvb_frontend {struct firedtv* sec_priv; } ;


 int FUNC_0 (struct firedtv*,int ,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct firedtv*) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend *VAR_0)
{
 struct firedtv *VAR_1 = VAR_0->sec_priv;
 int VAR_2;


 VAR_1->isochannel = VAR_1->adapter.num;

 VAR_2 = FUNC_0(VAR_1, VAR_1->subunit,
       VAR_1->isochannel);
 if (VAR_2) {
  FUNC_1(VAR_1->device,
   "could not establish point to point connection\n");
  return VAR_2;
 }

 return FUNC_2(VAR_1);
}
