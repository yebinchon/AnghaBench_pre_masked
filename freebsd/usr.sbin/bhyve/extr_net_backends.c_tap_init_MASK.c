
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tbuf ;
struct tap_priv {int * mevp; } ;
struct net_backend {int fd; scalar_t__ opaque; } ;
typedef int * net_be_rxeof_t ;
typedef int cap_rights_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ,int ) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,char*) ;
 scalar_t__ FUNC_4 (int,int ,int*) ;
 int * FUNC_5 (int,int ,int *,void*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char const*,int) ;
 int FUNC_9 (struct net_backend*) ;

__attribute__((used)) static int
FUNC_10(struct net_backend *VAR_7, const char *VAR_8,
  net_be_rxeof_t VAR_9, void *VAR_10)
{
 struct tap_priv *VAR_11 = (struct tap_priv *)VAR_7->opaque;
 char VAR_12[80];
 int VAR_13 = 1;

 cap_rights_t VAR_14;


 if (VAR_9 == ((void*)0)) {
  FUNC_0(("TAP backend requires non-NULL callback\n"));
  return (-1);
 }

 FUNC_7(VAR_12, "/dev/");
 FUNC_8(VAR_12, VAR_8, sizeof(VAR_12));

 VAR_7->fd = FUNC_6(VAR_12, VAR_6);
 if (VAR_7->fd == -1) {
  FUNC_0(("open of tap device %s failed\n", VAR_12));
  goto error;
 }





 if (FUNC_4(VAR_7->fd, VAR_5, &VAR_13) < 0) {
  FUNC_0(("tap device O_NONBLOCK failed\n"));
  goto error;
 }


 FUNC_1(&VAR_14, VAR_0, VAR_1, VAR_2);
 if (FUNC_2(VAR_7->fd, &VAR_14) == -1)
  FUNC_3(VAR_4, "Unable to apply rights for sandbox");


 VAR_11->mevp = FUNC_5(VAR_7->fd, VAR_3, VAR_9, VAR_10);
 if (VAR_11->mevp == ((void*)0)) {
  FUNC_0(("Could not register event\n"));
  goto error;
 }

 return (0);

error:
 FUNC_9(VAR_7);
 return (-1);
}
