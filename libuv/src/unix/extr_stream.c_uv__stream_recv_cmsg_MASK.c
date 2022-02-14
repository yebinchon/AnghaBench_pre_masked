
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int accepted_fd; } ;
typedef TYPE_1__ uv_stream_t ;
struct msghdr {int dummy; } ;
struct cmsghdr {scalar_t__ cmsg_type; int cmsg_len; } ;


 void* FUNC_0 (struct cmsghdr*) ;
 struct cmsghdr* FUNC_1 (struct msghdr*) ;
 int FUNC_2 (unsigned int) ;
 struct cmsghdr* FUNC_3 (struct msghdr*,struct cmsghdr*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (int) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_8(uv_stream_t* VAR_2, struct msghdr* VAR_3) {
  struct cmsghdr* VAR_4;

  for (VAR_4 = FUNC_1(VAR_3); VAR_4 != ((void*)0); VAR_4 = FUNC_3(VAR_3, VAR_4)) {
    char* VAR_5;
    char* VAR_6;
    int VAR_7;
    void* VAR_8;
    int* VAR_9;
    unsigned int VAR_10;
    unsigned int VAR_11;

    if (VAR_4->cmsg_type != VAR_0) {
      FUNC_5(VAR_1, "ignoring non-SCM_RIGHTS ancillary data: %ld\n",
          VAR_4->cmsg_type);
      continue;
    }


    VAR_8 = FUNC_0(VAR_4);
    VAR_9 = VAR_8;


    VAR_5 = (char*) VAR_4;
    VAR_6 = (char*) VAR_4 + VAR_4->cmsg_len;
    VAR_11 = 0;
    while (VAR_5 + FUNC_2(VAR_11 * sizeof(*VAR_9)) < VAR_6)
      VAR_11++;
    FUNC_4(VAR_5 + FUNC_2(VAR_11 * sizeof(*VAR_9)) == VAR_6);

    for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {

      if (VAR_2->accepted_fd != -1) {
        VAR_7 = FUNC_7(VAR_2, VAR_9[VAR_10]);
        if (VAR_7 != 0) {

          for (; VAR_10 < VAR_11; VAR_10++)
            FUNC_6(VAR_9[VAR_10]);
          return VAR_7;
        }
      } else {
        VAR_2->accepted_fd = VAR_9[VAR_10];
      }
    }
  }

  return 0;
}
