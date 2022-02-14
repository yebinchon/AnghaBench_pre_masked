
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwcount {int write; int fd; } ;
typedef int ev_ssize_t ;
typedef int BIO ;


 struct rwcount* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char const*,int,int ) ;

__attribute__((used)) static int
FUNC_5(BIO *VAR_0, const char *VAR_1, int VAR_2)
{
 struct rwcount *VAR_3 = FUNC_0(VAR_0);
 ev_ssize_t VAR_4 = FUNC_4(VAR_3->fd, VAR_1, VAR_2, 0);
 ++VAR_3->write;
 if (VAR_4 == -1 && FUNC_2(FUNC_3())) {
  FUNC_1(VAR_0);
 }
 return VAR_4;
}
