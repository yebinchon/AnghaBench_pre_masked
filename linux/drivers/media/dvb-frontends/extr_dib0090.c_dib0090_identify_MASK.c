
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_identity {int p1g; int in_soc; int version; int product; } ;
struct dib0090_state {struct dib0090_identity identity; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (struct dib0090_state*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_4)
{
 struct dib0090_state *VAR_5 = VAR_4->tuner_priv;
 u16 VAR_6;
 struct dib0090_identity *VAR_7 = &VAR_5->identity;

 VAR_6 = FUNC_0(VAR_5, 0x1a);

 VAR_7->p1g = 0;
 VAR_7->in_soc = 0;

 FUNC_1("Tuner identification (Version = 0x%04x)\n", VAR_6);


 VAR_6 &= ~VAR_2;

 VAR_7->version = VAR_6 & 0xff;
 VAR_7->product = (VAR_6 >> 8) & 0xf;

 if (VAR_7->product != VAR_1)
  goto identification_error;

 if ((VAR_7->version & 0x3) == VAR_3) {
  VAR_7->in_soc = 1;
  switch (VAR_7->version) {
  case 129:
   FUNC_1("SOC 8090 P1-G11R1 Has been detected\n");
   VAR_7->p1g = 1;
   break;
  case 128:
   FUNC_1("SOC 8090 P1-G21R1 Has been detected\n");
   VAR_7->p1g = 1;
   break;
  case 131:
   FUNC_1("SOC 7090 P1-G11R1 Has been detected\n");
   VAR_7->p1g = 1;
   break;
  case 130:
   FUNC_1("SOC 7090 P1-G21R1 Has been detected\n");
   VAR_7->p1g = 1;
   break;
  default:
   goto identification_error;
  }
 } else {
  switch ((VAR_7->version >> 5) & 0x7) {
  case 140:
   FUNC_1("MP001 : 9090/8096\n");
   break;
  case 139:
   FUNC_1("MP005 : Single Sband\n");
   break;
  case 138:
   FUNC_1("MP008 : diversity VHF-UHF-LBAND\n");
   break;
  case 137:
   FUNC_1("MP009 : diversity 29098 CBAND-UHF-LBAND-SBAND\n");
   break;
  default:
   goto identification_error;
  }

  switch (VAR_7->version & 0x1f) {
  case 132:
   FUNC_1("P1G_21R2 detected\n");
   VAR_7->p1g = 1;
   break;
  case 133:
   FUNC_1("P1G detected\n");
   VAR_7->p1g = 1;
   break;
  case 134:
   FUNC_1("P1D/E/F detected\n");
   break;
  case 135:
   FUNC_1("P1C detected\n");
   break;
  case 136:
   FUNC_1("P1-A/B detected: driver is deactivated - not available\n");
   goto identification_error;
   break;
  default:
   goto identification_error;
  }
 }

 return 0;

identification_error:
 return -VAR_0;
}
