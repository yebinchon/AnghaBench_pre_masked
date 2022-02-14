
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
typedef struct fsmheader {size_t code; size_t id; int length; } const fsmheader ;
typedef struct fsmheader u_char ;
struct physical {int link; TYPE_1__* dl; } ;
struct mbuf {int dummy; } ;
struct TYPE_2__ {int bundle; } ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,struct mbuf*,int ,scalar_t__,int ) ;
 int FUNC_4 (int ,char*,struct mbuf*) ;
 int FUNC_5 (int ,char*,int ,...) ;
 struct mbuf* FUNC_6 (int,int ) ;
 int FUNC_7 (scalar_t__,struct fsmheader const*,int) ;

__attribute__((used)) static void
FUNC_8(struct physical *VAR_5, u_int VAR_6, u_int VAR_7,
    const u_char *VAR_8, int VAR_9, const char *VAR_10)
{
  int VAR_11;
  struct fsmheader VAR_12;
  struct mbuf *VAR_13;

  VAR_11 = sizeof(struct fsmheader) + VAR_9;
  VAR_12.code = VAR_6;
  VAR_12.id = VAR_7;
  VAR_12.length = FUNC_2(VAR_11);
  VAR_13 = FUNC_6(VAR_11, VAR_2);
  FUNC_7(FUNC_1(VAR_13), &VAR_12, sizeof(struct fsmheader));
  if (VAR_9)
    FUNC_7(FUNC_1(VAR_13) + sizeof(struct fsmheader), VAR_8, VAR_9);
  FUNC_4(VAR_0, "ChapOutput", VAR_13);
  if (VAR_10 == ((void*)0))
    FUNC_5(VAR_1, "Chap Output: %s\n", VAR_4[VAR_6]);
  else
    FUNC_5(VAR_1, "Chap Output: %s (%s)\n", VAR_4[VAR_6], VAR_10);
  FUNC_3(&VAR_5->link, VAR_13, VAR_5->dl->bundle,
                  FUNC_0(&VAR_5->link) - 1, VAR_3);
}
