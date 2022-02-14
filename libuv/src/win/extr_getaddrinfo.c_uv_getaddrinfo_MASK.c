
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uv_loop_t ;
struct TYPE_5__ {int retcode; int * alloc; int work_req; struct addrinfoW* addrinfow; int * service; int * node; int * loop; int * addrinfo; scalar_t__ getaddrinfo_cb; } ;
typedef TYPE_1__ uv_getaddrinfo_t ;
typedef scalar_t__ uv_getaddrinfo_cb ;
struct addrinfoW {int * ai_next; int * ai_addr; int * ai_canonname; scalar_t__ ai_addrlen; int ai_flags; int ai_protocol; int ai_socktype; int ai_family; } ;
struct addrinfo {int ai_flags; int ai_protocol; int ai_socktype; int ai_family; } ;
typedef int hostname_ascii ;
typedef int WCHAR ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char const*,int,int *,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 long FUNC_8 (char const*,char const*,char*,char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 int FUNC_11 (int *,int *,int ,int (*) (int *),int (*) (int *,int )) ;
 int FUNC_12 (int) ;

int FUNC_13(uv_loop_t* VAR_5,
                   uv_getaddrinfo_t* VAR_6,
                   uv_getaddrinfo_cb VAR_7,
                   const char* VAR_8,
                   const char* VAR_9,
                   const struct addrinfo* VAR_10) {
  char VAR_11[256];
  int VAR_12 = 0;
  int VAR_13 = 0;
  int VAR_14 = 0;
  char* VAR_15 = ((void*)0);
  int VAR_16;
  long VAR_17;

  if (VAR_6 == ((void*)0) || (VAR_8 == ((void*)0) && VAR_9 == ((void*)0))) {
    return VAR_1;
  }

  FUNC_3(VAR_6, VAR_2);
  VAR_6->getaddrinfo_cb = VAR_7;
  VAR_6->addrinfo = ((void*)0);
  VAR_6->loop = VAR_5;
  VAR_6->retcode = 0;


  if (VAR_8 != ((void*)0)) {
    VAR_17 = FUNC_8(VAR_8,
                          VAR_8 + FUNC_4(VAR_8),
                          VAR_11,
                          VAR_11 + sizeof(VAR_11));
    if (VAR_17 < 0)
      return VAR_17;
    VAR_12 = FUNC_0(FUNC_2(VAR_0, 0, VAR_11,
                                                -1, ((void*)0), 0) * sizeof(WCHAR));
    if (VAR_12 == 0) {
      VAR_16 = FUNC_1();
      goto error;
    }
    VAR_8 = VAR_11;
  }

  if (VAR_9 != ((void*)0)) {
    VAR_13 = FUNC_0(FUNC_2(VAR_0,
                                                   0,
                                                   VAR_9,
                                                   -1,
                                                   ((void*)0),
                                                   0) *
                               sizeof(WCHAR));
    if (VAR_13 == 0) {
      VAR_16 = FUNC_1();
      goto error;
    }
  }
  if (VAR_10 != ((void*)0)) {
    VAR_14 = FUNC_0(sizeof(struct addrinfoW));
  }


  VAR_15 = (char*)FUNC_9(VAR_12 + VAR_13 + VAR_14);
  if (!VAR_15) {
    VAR_16 = VAR_4;
    goto error;
  }


  VAR_6->alloc = (void*)VAR_15;



  if (VAR_8 != ((void*)0)) {
    VAR_6->node = (WCHAR*)VAR_15;
    if (FUNC_2(VAR_0,
                            0,
                            VAR_8,
                            -1,
                            (WCHAR*) VAR_15,
                            VAR_12 / sizeof(WCHAR)) == 0) {
      VAR_16 = FUNC_1();
      goto error;
    }
    VAR_15 += VAR_12;
  } else {
    VAR_6->node = ((void*)0);
  }



  if (VAR_9 != ((void*)0)) {
    VAR_6->service = (WCHAR*)VAR_15;
    if (FUNC_2(VAR_0,
                            0,
                            VAR_9,
                            -1,
                            (WCHAR*) VAR_15,
                            VAR_13 / sizeof(WCHAR)) == 0) {
      VAR_16 = FUNC_1();
      goto error;
    }
    VAR_15 += VAR_13;
  } else {
    VAR_6->service = ((void*)0);
  }


  if (VAR_10 != ((void*)0)) {
    VAR_6->addrinfow = (struct addrinfoW*)VAR_15;
    VAR_6->addrinfow->ai_family = VAR_10->ai_family;
    VAR_6->addrinfow->ai_socktype = VAR_10->ai_socktype;
    VAR_6->addrinfow->ai_protocol = VAR_10->ai_protocol;
    VAR_6->addrinfow->ai_flags = VAR_10->ai_flags;
    VAR_6->addrinfow->ai_addrlen = 0;
    VAR_6->addrinfow->ai_canonname = ((void*)0);
    VAR_6->addrinfow->ai_addr = ((void*)0);
    VAR_6->addrinfow->ai_next = ((void*)0);
  } else {
    VAR_6->addrinfow = ((void*)0);
  }

  FUNC_10(VAR_5, VAR_6);

  if (VAR_7) {
    FUNC_11(VAR_5,
                    &VAR_6->work_req,
                    VAR_3,
                    FUNC_7,
                    FUNC_6);
    return 0;
  } else {
    FUNC_7(&VAR_6->work_req);
    FUNC_6(&VAR_6->work_req, 0);
    return VAR_6->retcode;
  }

error:
  if (VAR_6 != ((void*)0)) {
    FUNC_5(VAR_6->alloc);
    VAR_6->alloc = ((void*)0);
  }
  return FUNC_12(VAR_16);
}
