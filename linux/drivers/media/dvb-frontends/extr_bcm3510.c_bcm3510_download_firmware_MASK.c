
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct firmware {int size; int * data; } ;
struct dvb_frontend {struct bcm3510_state* demodulator_priv; } ;
struct bcm3510_state {TYPE_1__* config; } ;
typedef int __le16 ;
struct TYPE_2__ {int (* request_firmware ) (struct dvb_frontend*,struct firmware const**,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct bcm3510_state*,scalar_t__,int const*,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int,...) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct dvb_frontend*,struct firmware const**,int ) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend* VAR_1)
{
 struct bcm3510_state* VAR_2 = VAR_1->demodulator_priv;
 const struct firmware *VAR_3;
 u16 VAR_4,VAR_5;
 const u8 *VAR_6;
 int VAR_7,VAR_8;

 FUNC_1("requesting firmware\n");
 if ((VAR_7 = VAR_2->config->request_firmware(VAR_1, &VAR_3, VAR_0)) < 0) {
  FUNC_2("could not load firmware (%s): %d",VAR_0,VAR_7);
  return VAR_7;
 }
 FUNC_1("got firmware: %zu\n", VAR_3->size);

 VAR_6 = VAR_3->data;
 for (VAR_8 = 0; VAR_8 < VAR_3->size;) {
  VAR_4 = FUNC_3(*((__le16 *)&VAR_6[VAR_8]));
  VAR_5 = FUNC_3(*((__le16 *)&VAR_6[VAR_8+2]));
  FUNC_1("firmware chunk, addr: 0x%04x, len: 0x%04x, total length: 0x%04zx\n",VAR_4,VAR_5,VAR_3->size);
  if ((VAR_7 = FUNC_0(VAR_2,VAR_4,&VAR_6[VAR_8+4],VAR_5)) < 0) {
   FUNC_2("firmware download failed: %d\n",VAR_7);
   return VAR_7;
  }
  VAR_8 += 4 + VAR_5;
 }
 FUNC_4(VAR_3);
 FUNC_1("firmware download successfully completed\n");
 return 0;
}
