
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mbuf {int dummy; } ;
struct async {int mode; int* hbuff; int length; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int ) ;
 struct mbuf* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mbuf*,int*,int ) ;

__attribute__((used)) static struct mbuf *
FUNC_3(struct async *VAR_6, u_char VAR_7)
{
  struct mbuf *VAR_8;

  if ((VAR_6->mode & VAR_5) && VAR_7 != 128)
    return ((void*)0);

  switch (VAR_7) {
  case 128:
    VAR_6->mode &= ~VAR_5;
    if (VAR_6->length) {
      VAR_8 = FUNC_1(VAR_6->length, VAR_3);
      FUNC_2(VAR_8, VAR_6->hbuff, VAR_6->length);
      VAR_6->length = 0;
      return VAR_8;
    }
    break;
  case 129:
    if (!(VAR_6->mode & VAR_4)) {
      VAR_6->mode |= VAR_4;
      break;
    }

  default:
    if (VAR_6->length >= VAR_0) {

      FUNC_0(VAR_2, "Packet too large (%d), discarding.\n",
                 VAR_6->length);
      VAR_6->length = 0;
      VAR_6->mode = VAR_5;
      break;
    }
    if (VAR_6->mode & VAR_4) {
      VAR_7 ^= VAR_1;
      VAR_6->mode &= ~VAR_4;
    }
    VAR_6->hbuff[VAR_6->length++] = VAR_7;
    break;
  }
  return ((void*)0);
}
