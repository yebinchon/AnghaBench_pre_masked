
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_scmd {int seqno_numivs; } ;
struct sock {int dummy; } ;
struct chtls_hws {int mfs; struct tls_scmd scmd; } ;
struct chtls_sock {struct chtls_hws tlshws; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 struct chtls_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_4, int VAR_5,
    int VAR_6,
    unsigned short *VAR_7)
{
 struct chtls_sock *VAR_8 = FUNC_1(VAR_4);
 struct chtls_hws *VAR_9 = &VAR_8->tlshws;
 struct tls_scmd *VAR_10 = &VAR_9->scmd;
 int VAR_11 = VAR_9->mfs;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 if (FUNC_0(VAR_10->seqno_numivs) ==
     VAR_2) {
  VAR_15 = VAR_1 + VAR_0 +
     VAR_3;

  if (VAR_6) {
   *VAR_7 = VAR_5 / (VAR_15 + VAR_11);
   if (*VAR_7 > 32)
    *VAR_7 = 32;
   else if (!*VAR_7)
    *VAR_7 = 1;
   VAR_12 = (*VAR_7) * VAR_15;
   return VAR_12;
  }
  VAR_14 = (VAR_5 / VAR_11);
  VAR_12 = VAR_14 * VAR_15;
  VAR_13 = VAR_5 % VAR_11;
  if (VAR_13 > 0)
   VAR_12 += VAR_15;
 }
 return VAR_12;
}
