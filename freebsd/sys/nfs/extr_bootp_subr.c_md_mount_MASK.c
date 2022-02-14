
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct thread {int dummy; } ;
struct sockaddr_in {int sin_port; } ;
struct nfs_args {int flags; } ;
struct mbuf {int dummy; } ;


 int VAR_0 ;
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
 int FUNC_0 (struct sockaddr_in*,int ,int ,int ,struct mbuf**,int *,struct thread*) ;
 int FUNC_1 (struct sockaddr_in*,int ,int ,int *,struct thread*) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (struct mbuf**,int*) ;
 scalar_t__ FUNC_5 (struct mbuf**,int *,int) ;
 struct mbuf* FUNC_6 (char*,int ) ;

__attribute__((used)) static int
FUNC_7(struct sockaddr_in *VAR_12, char *VAR_13, u_char *VAR_14, int *VAR_15,
    struct nfs_args *VAR_16, struct thread *VAR_17)
{
 struct mbuf *VAR_18;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22;
  VAR_19 = FUNC_1(VAR_12, 100005, 1,
         &VAR_12->sin_port, VAR_17);
  if (VAR_19 != 0)
   return VAR_19;

  VAR_18 = FUNC_6(VAR_13, FUNC_3(VAR_13));


  VAR_19 = FUNC_0(VAR_12, 100005, 1,
      1, &VAR_18, ((void*)0), VAR_17);
  if (VAR_19 != 0)
   return VAR_19;





 if (FUNC_4(&VAR_18, &VAR_19) != 0 || VAR_19 != 0)
  goto bad;

 if ((VAR_16->flags & VAR_2) != 0) {
  if (FUNC_4(&VAR_18, VAR_15) != 0 ||
      *VAR_15 > VAR_4 ||
      *VAR_15 <= 0)
   goto bad;
 } else
  *VAR_15 = VAR_3;

 if (FUNC_5(&VAR_18, VAR_14, *VAR_15) != 0)
  goto bad;

 if (VAR_16->flags & VAR_2) {
  if (FUNC_4(&VAR_18, &VAR_21) != 0)
   goto bad;
  VAR_20 = 0;
  if (VAR_21 < 0 || VAR_21 > 100)
   goto bad;
  while (VAR_21 > 0) {
   if (FUNC_4(&VAR_18, &VAR_22) != 0)
    goto bad;
   if (VAR_22 == 1)
    VAR_20 = 1;
   VAR_21--;
  }
  if (VAR_20 == 0)
   goto bad;
 }


 VAR_19 = FUNC_1(VAR_12, VAR_5,
        (VAR_16->flags &
         VAR_2) ? VAR_7 : VAR_6,
        &VAR_12->sin_port, VAR_17);

 goto out;

bad:
 VAR_19 = VAR_1;

out:
 FUNC_2(VAR_18);
 return VAR_19;
}
