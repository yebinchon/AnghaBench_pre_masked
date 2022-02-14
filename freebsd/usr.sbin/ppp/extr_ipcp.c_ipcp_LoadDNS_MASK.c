
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_5__ {int bundle; } ;
struct TYPE_4__ {char* resolv; char* resolv_nons; int resolver; TYPE_3__* dns; } ;
struct ipcp {TYPE_2__ fsm; TYPE_1__ ns; } ;
typedef int ssize_t ;
struct TYPE_6__ {scalar_t__ s_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int,struct stat*) ;
 scalar_t__ FUNC_4 (char*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char) ;
 int FUNC_7 (int ,char*,unsigned long,unsigned long,...) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (char*,char*,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int,char*,int) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (char*,char*) ;

void
FUNC_17(struct ipcp *VAR_6)
{
  int VAR_7;

  VAR_6->ns.dns[0].s_addr = VAR_6->ns.dns[1].s_addr = VAR_1;

  if (VAR_6->ns.resolv != ((void*)0)) {
    FUNC_2(VAR_6->ns.resolv);
    VAR_6->ns.resolv = ((void*)0);
  }
  if (VAR_6->ns.resolv_nons != ((void*)0)) {
    FUNC_2(VAR_6->ns.resolv_nons);
    VAR_6->ns.resolv_nons = ((void*)0);
  }
  VAR_6->ns.resolver = 0;

  if ((VAR_7 = FUNC_10(VAR_4, VAR_3)) != -1) {
    struct stat VAR_8;

    if (FUNC_3(VAR_7, &VAR_8) == 0) {
      ssize_t VAR_9;





      if ((VAR_6->ns.resolv_nons = (char *)FUNC_8(VAR_8.st_size + 1)) == ((void*)0))
        FUNC_7(VAR_2, "Failed to malloc %lu for %s: %s\n",
                   (unsigned long)VAR_8.st_size, VAR_4, FUNC_14(VAR_5));
      else if ((VAR_6->ns.resolv = (char *)FUNC_8(VAR_8.st_size + 1)) == ((void*)0)) {
        FUNC_7(VAR_2, "Failed(2) to malloc %lu for %s: %s\n",
                   (unsigned long)VAR_8.st_size, VAR_4, FUNC_14(VAR_5));
        FUNC_2(VAR_6->ns.resolv_nons);
        VAR_6->ns.resolv_nons = ((void*)0);
      } else if ((VAR_9 = FUNC_11(VAR_7, VAR_6->ns.resolv, VAR_8.st_size)) != VAR_8.st_size) {
        if (VAR_9 == -1)
          FUNC_7(VAR_2, "Failed to read %s: %s\n",
                     VAR_4, FUNC_14(VAR_5));
        else
          FUNC_7(VAR_2, "Failed to read %s, got %lu not %lu\n",
                     VAR_4, (unsigned long)VAR_9,
                     (unsigned long)VAR_8.st_size);
        FUNC_2(VAR_6->ns.resolv_nons);
        VAR_6->ns.resolv_nons = ((void*)0);
        FUNC_2(VAR_6->ns.resolv);
        VAR_6->ns.resolv = ((void*)0);
      } else {
        char *VAR_10, *VAR_11, *VAR_12, VAR_13;
        int VAR_14;

        VAR_6->ns.resolv[VAR_8.st_size] = '\0';
        VAR_6->ns.resolver = 1;

        VAR_11 = VAR_6->ns.resolv_nons;
        VAR_10 = VAR_6->ns.resolv;
        VAR_14 = 0;

        while ((VAR_12 = FUNC_16(VAR_10, "nameserver")) != ((void*)0)) {
          if (VAR_12 != VAR_10) {
            FUNC_9(VAR_11, VAR_10, VAR_12 - VAR_10);
            VAR_11 += VAR_12 - VAR_10;
          }
          if ((VAR_12 != VAR_10 && VAR_12[-1] != '\n') || !FUNC_6(VAR_12[10])) {
            FUNC_9(VAR_11, VAR_12, 9);
            VAR_11 += 9;
            VAR_10 = VAR_12 + 9;
            continue;
          }

          for (VAR_10 = VAR_12 + 11; FUNC_6(*VAR_10); VAR_10++)
            ;

          for (VAR_12 = VAR_10; FUNC_5(*VAR_12); VAR_12++)
            ;

          VAR_13 = *VAR_12;
          *VAR_12 = '\0';
          if (VAR_14 < 2 && FUNC_4(VAR_10, VAR_6->ns.dns))
            VAR_14++;
          *VAR_12 = VAR_13;

          if ((VAR_10 = FUNC_12(VAR_12, '\n')) == ((void*)0))
            VAR_10 = VAR_12 + FUNC_15(VAR_12);
          else
            VAR_10++;
        }




        FUNC_13(VAR_11, VAR_10);
        VAR_11 += FUNC_15(VAR_11) - 1;
        while (VAR_11 >= VAR_6->ns.resolv_nons && *VAR_11 == '\n')
          *VAR_11-- = '\0';
        if (VAR_14 == 2 && VAR_6->ns.dns[0].s_addr == VAR_0) {
          VAR_6->ns.dns[0].s_addr = VAR_6->ns.dns[1].s_addr;
          VAR_6->ns.dns[1].s_addr = VAR_0;
        }
        FUNC_0(VAR_6->fsm.bundle);
      }
    } else
      FUNC_7(VAR_2, "Failed to stat opened %s: %s\n",
                 VAR_4, FUNC_14(VAR_5));

    FUNC_1(VAR_7);
  }
}
