
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msghdr {scalar_t__ msg_controllen; } ;
struct cmsghdr {scalar_t__ cmsg_type; int cmsg_len; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 struct cmsghdr* FUNC_2 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int,struct msghdr*,int) ;
 int FUNC_5 (int,int) ;

ssize_t FUNC_6(int VAR_3, struct msghdr* VAR_4, int VAR_5) {
  struct cmsghdr* VAR_6;
  ssize_t VAR_7;
  int* VAR_8;
  int* VAR_9;

  static int VAR_10;
  if (VAR_10 == 0) {
    VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5 | 0x40000000);
    if (VAR_7 != -1)
      return VAR_7;
    if (VAR_2 != VAR_0)
      return FUNC_3(VAR_2);
    VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5);
    if (VAR_7 == -1)
      return FUNC_3(VAR_2);
    VAR_10 = 1;
  } else {
    VAR_7 = FUNC_4(VAR_3, VAR_4, VAR_5);
  }



  if (VAR_7 == -1)
    return FUNC_3(VAR_2);
  if (VAR_4->msg_controllen == 0)
    return VAR_7;
  for (VAR_6 = FUNC_1(VAR_4); VAR_6 != ((void*)0); VAR_6 = FUNC_2(VAR_4, VAR_6))
    if (VAR_6->cmsg_type == VAR_1)
      for (VAR_8 = (int*) FUNC_0(VAR_6),
           VAR_9 = (int*) ((char*) VAR_6 + VAR_6->cmsg_len);
           VAR_8 < VAR_9;
           VAR_8 += 1)
        FUNC_5(*VAR_8, 1);
  return VAR_7;
}
