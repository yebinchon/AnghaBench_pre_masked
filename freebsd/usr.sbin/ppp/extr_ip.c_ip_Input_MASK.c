
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {int family; } ;
struct tun_data {char* data; TYPE_2__ header; } ;
struct mbuf {int dummy; } ;
struct link {int name; } ;
struct TYPE_6__ {int fd; scalar_t__ header; } ;
struct TYPE_4__ {int alive; int in; } ;
struct bundle {TYPE_3__ dev; TYPE_1__ filter; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int ,int *,unsigned int*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct bundle*,int ,char*,size_t,int *,int *,unsigned int*) ;
 int FUNC_2 (struct bundle*,unsigned int) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,size_t,int) ;
 int FUNC_5 (struct mbuf*) ;
 size_t FUNC_6 (struct mbuf*) ;
 int FUNC_7 (struct mbuf*,char*,size_t) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,size_t) ;

__attribute__((used)) static size_t
FUNC_10(struct bundle *VAR_3, struct link *VAR_4, struct mbuf *VAR_5, u_int32_t VAR_6)
{
  ssize_t VAR_7;
  size_t VAR_8;
  struct tun_data VAR_9;
  char *VAR_10;
  unsigned VAR_11, VAR_12;

  VAR_8 = FUNC_6(VAR_5);
  if (VAR_8 > sizeof VAR_9.data) {
    FUNC_4(VAR_1, "ip_Input: %s: Packet too large (got %zd, max %d)\n",
               VAR_4->name, VAR_8, (int)(sizeof VAR_9.data));
    FUNC_5(VAR_5);
    return 0;
  }
  FUNC_7(VAR_5, VAR_9.data, VAR_8);

  VAR_11 = 0;
  if (FUNC_1(VAR_3, VAR_6, VAR_9.data, VAR_8, &VAR_3->filter.in,
                  ((void*)0), &VAR_11) < 0)
    return 0;

  VAR_12 = 0;
  if (!FUNC_0(VAR_9.data, VAR_6, &VAR_3->filter.alive, &VAR_12)) {
    if (VAR_11 == 0)
      VAR_11 = VAR_12;
    FUNC_2(VAR_3, VAR_11);
  }

  if (VAR_3->dev.header) {
    VAR_9.header.family = FUNC_3(VAR_6);
    VAR_8 += sizeof VAR_9 - sizeof VAR_9.data;
    VAR_10 = (char *)&VAR_9;
  } else
    VAR_10 = VAR_9.data;

  VAR_7 = FUNC_9(VAR_3->dev.fd, VAR_10, VAR_8);
  if (VAR_7 != (ssize_t)VAR_8) {
    if (VAR_7 == -1)
      FUNC_4(VAR_0, "ip_Input: %s: wrote %zd, got %s\n",
                 VAR_4->name, VAR_8, FUNC_8(VAR_2));
    else
      FUNC_4(VAR_0, "ip_Input: %s: wrote %zd, got %zd\n", VAR_4->name, VAR_8,
   VAR_7);
  }

  return VAR_8;
}
