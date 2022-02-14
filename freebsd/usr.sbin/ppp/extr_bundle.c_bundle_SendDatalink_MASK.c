
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {int sun_path; } ;
struct msghdr {int msg_iovlen; char* msg_control; int msg_controllen; scalar_t__ msg_flags; struct iovec* msg_iov; scalar_t__ msg_namelen; int * msg_name; } ;
struct iovec {int iov_base; scalar_t__ iov_len; } ;
struct datalink {int bundle; int physical; int name; } ;
struct cmsghdr {int cmsg_len; int cmsg_type; int cmsg_level; } ;
typedef int ssize_t ;
typedef scalar_t__ pid_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 char const* VAR_14 ;
 char* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,struct datalink*) ;
 int FUNC_6 (int ,struct datalink*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (struct datalink*,struct iovec*,int*,int,int*,int*) ;
 int VAR_15 ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (int ,char*,int,...) ;
 int FUNC_13 (struct msghdr*,char,int) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (int,scalar_t__*,int) ;
 int FUNC_16 (int,struct msghdr*,int ) ;
 int FUNC_17 (int,int ,int ,int*,int) ;
 int FUNC_18 (int ,int ,int ,int*) ;
 int FUNC_19 (char*,char const*) ;
 int FUNC_20 (char const*) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (char const*) ;
 scalar_t__ FUNC_23 (int) ;
 int FUNC_24 (int) ;
 int FUNC_25 (int,struct iovec*,int) ;

void
FUNC_26(struct datalink *VAR_16, int VAR_17, struct sockaddr_un *VAR_18)
{
  char VAR_19[FUNC_1(sizeof(int) * VAR_8)];
  const char *VAR_20;
  char *VAR_21;
  struct cmsghdr *VAR_22;
  struct msghdr VAR_23;
  struct iovec VAR_24[VAR_6];
  int VAR_25, VAR_26, VAR_27, VAR_28, VAR_29[VAR_8], VAR_30, VAR_31[2];
  ssize_t VAR_32;
  pid_t VAR_33;

  FUNC_12(VAR_3, "Transmitting datalink %s\n", VAR_16->name);


  VAR_20 = FUNC_14(VAR_16->physical);
  if (VAR_20) {
    VAR_21 = FUNC_4(FUNC_22(VAR_20) + 1);
    FUNC_19(VAR_21, VAR_20);
  } else
    VAR_21 = ((void*)0);

  FUNC_6(VAR_16->bundle, VAR_16);
  FUNC_5(VAR_16->bundle, VAR_16);


  VAR_24[0].iov_len = FUNC_22(VAR_14) + 1;
  VAR_24[0].iov_base = FUNC_20(VAR_14);
  VAR_25 = 1;
  VAR_30 = 0;

  VAR_29[0] = FUNC_9(VAR_16, VAR_24, &VAR_25, VAR_6, VAR_29 + 2, &VAR_30);

  if (VAR_29[0] != -1 && FUNC_18(VAR_0, VAR_9, VAR_5, VAR_31) != -1) {




    VAR_29[1] = VAR_31[1];

    VAR_30 += 2;
    FUNC_13(&VAR_23, '\0', sizeof VAR_23);

    VAR_23.msg_name = ((void*)0);
    VAR_23.msg_namelen = 0;





    VAR_23.msg_iovlen = 1;
    VAR_23.msg_iov = VAR_24;
    VAR_23.msg_control = VAR_19;
    VAR_23.msg_controllen = FUNC_1(sizeof(int) * VAR_30);
    VAR_23.msg_flags = 0;

    VAR_22 = (struct cmsghdr *)VAR_19;
    VAR_22->cmsg_len = VAR_23.msg_controllen;
    VAR_22->cmsg_level = VAR_10;
    VAR_22->cmsg_type = VAR_7;

    for (VAR_26 = 0; VAR_26 < VAR_30; VAR_26++)
      *((int *)FUNC_0(VAR_22) + VAR_26) = VAR_29[VAR_26];

    for (VAR_26 = 1, VAR_27 = 0; VAR_26 < VAR_25; VAR_26++)
      VAR_27 += VAR_24[VAR_26].iov_len;

    if (FUNC_17(VAR_31[0], VAR_10, VAR_12, &VAR_27, sizeof(int)) == -1)
      FUNC_12(VAR_2, "setsockopt(SO_RCVBUF, %d): %s\n", VAR_27,
                 FUNC_21(VAR_15));
    if (FUNC_17(VAR_31[1], VAR_10, VAR_11, &VAR_27, sizeof(int)) == -1)
      FUNC_12(VAR_2, "setsockopt(SO_RCVBUF, %d): %s\n", VAR_27,
                 FUNC_21(VAR_15));

    FUNC_12(VAR_1, "Sending %d descriptor%s and %u bytes in scatter"
               "/gather array\n", VAR_30, VAR_30 == 1 ? "" : "s",
               (unsigned)VAR_24[0].iov_len);

    if ((VAR_32 = FUNC_16(VAR_17, &VAR_23, 0)) == -1)
      FUNC_12(VAR_2, "Failed sendmsg: %s: %s\n",
                 VAR_18->sun_path, FUNC_21(VAR_15));
    else if (VAR_32 != (ssize_t)VAR_24[0].iov_len)
      FUNC_12(VAR_2, "%s: Failed initial sendmsg: Only sent %zd of %u\n",
                 VAR_18->sun_path, VAR_32, (unsigned)VAR_24[0].iov_len);
    else {

      int VAR_34;

      if ((VAR_32 = FUNC_15(VAR_31[0], &VAR_33, sizeof VAR_33)) == sizeof VAR_33) {
        FUNC_12(VAR_1, "Received confirmation from pid %ld\n",
                   (long)VAR_33);
        if (VAR_21 && (VAR_34 = FUNC_3(VAR_21, VAR_33)) != VAR_13)
            FUNC_12(VAR_2, "uu_lock_txfr: %s\n", FUNC_24(VAR_34));

        FUNC_12(VAR_1, "Transmitting link (%d bytes)\n", VAR_27);
        if ((VAR_32 = FUNC_25(VAR_31[0], VAR_24 + 1, VAR_25 - 1)) != VAR_27) {
          if (VAR_32 == -1)
            FUNC_12(VAR_2, "%s: Failed writev: %s\n",
                       VAR_18->sun_path, FUNC_21(VAR_15));
          else
            FUNC_12(VAR_2, "%s: Failed writev: Wrote %zd of %d\n",
                       VAR_18->sun_path, VAR_32, VAR_27);
        }
      } else if (VAR_32 == -1)
        FUNC_12(VAR_2, "%s: Failed socketpair read: %s\n",
                   VAR_18->sun_path, FUNC_21(VAR_15));
      else
        FUNC_12(VAR_2, "%s: Failed socketpair read: Got %zd of %d\n",
                   VAR_18->sun_path, VAR_32, (int)(sizeof VAR_33));
    }

    FUNC_8(VAR_31[0]);
    FUNC_8(VAR_31[1]);

    VAR_28 = FUNC_2(VAR_16->bundle, VAR_4) ||
             FUNC_23(VAR_29[0]) == FUNC_11();
    while (VAR_30)
      FUNC_8(VAR_29[--VAR_30]);
    if (VAR_28)
      FUNC_7(VAR_16->bundle, VAR_32 != -1);
  }
  FUNC_8(VAR_17);

  while (VAR_25--)
    FUNC_10(VAR_24[VAR_25].iov_base);
}
