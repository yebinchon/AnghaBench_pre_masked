
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct option {char* member_0; int member_1; unsigned char member_3; int * member_2; } ;
struct TYPE_14__ {int rm_so; } ;
typedef TYPE_1__ regmatch_t ;
struct TYPE_15__ {int re_nsub; } ;
typedef TYPE_2__ regex_t ;
typedef TYPE_3__* iwdpm_t ;
struct TYPE_16__ {int is_debug; TYPE_1__* frontend; TYPE_1__* sim_wi_socket_addr; TYPE_1__* config; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_1__**,char*,char const*,char*) ;
 TYPE_1__* FUNC_1 (size_t,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,char**,char*,struct option*,int*) ;
 TYPE_2__* FUNC_4 (int) ;
 char const* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,char*,char*,char const*,...) ;
 int FUNC_6 (TYPE_2__*,char*,int ) ;
 int FUNC_7 (TYPE_2__*,char const*,size_t,TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_2__*) ;
 TYPE_1__* FUNC_9 (char const*) ;
 char* FUNC_10 (char*,char) ;

int FUNC_11(iwdpm_t VAR_7, int VAR_8, char **VAR_9) {

  static struct option VAR_10[] = {
    {"udid", 1, ((void*)0), 'u'},
    {"config", 1, ((void*)0), 'c'},
    {"frontend", 1, ((void*)0), 'f'},
    {"no-frontend", 0, ((void*)0), 'F'},
    {"simulator-webinspector", 1, ((void*)0), 's'},
    {"debug", 0, ((void*)0), 'd'},
    {"help", 0, ((void*)0), 'h'},
    {"version", 0, ((void*)0), 'V'},
    {((void*)0), 0, ((void*)0), 0}
  };
  const char *VAR_11 = "null:9221,:9222-9322";
  const char *VAR_12 =
     "http://chrome-devtools-frontend.appspot.com/static/27.0.1453.93/devtools.html";

  const char *VAR_13 = "localhost:27753";

  VAR_7->config = FUNC_9(VAR_11);
  VAR_7->frontend = FUNC_9(VAR_12);
  VAR_7->sim_wi_socket_addr = FUNC_9(VAR_13);

  int VAR_14 = 0;
  while (!VAR_14) {
    int VAR_15 = FUNC_3(VAR_8, VAR_9, "hVu:c:f:Fs:d", VAR_10, (int *)0);
    if (VAR_15 == -1) {
      break;
    }
    switch (VAR_15) {
      case 'h':
        VAR_14 = -1;
        break;
      case 'V':
        FUNC_5(
            "%s\n"
            "Built with libimobiledevice v%s, libplist v%s\n",
            VAR_2, VAR_0, VAR_1);
        VAR_14 = -2;
        break;
      case 'u':
        {
          regex_t *VAR_16 = FUNC_4(sizeof(regex_t));
          FUNC_6(VAR_16, "^[a-fA-F0-9-]{25,}(:[0-9]+(-[0-9]+)?)?$", VAR_4);
          size_t VAR_17 = VAR_16->re_nsub + 1;
          regmatch_t *VAR_18 = FUNC_1(VAR_17, sizeof(regmatch_t));
          bool VAR_19 = !FUNC_7(VAR_16, VAR_5, VAR_17, VAR_18, 0);
          bool VAR_20 = (VAR_19 && VAR_18[1].rm_so >= 0);
          FUNC_2(VAR_18);
          FUNC_8(VAR_16);
          FUNC_2(VAR_7->config);
          VAR_7->config = ((void*)0);
          if (!VAR_19) {
            VAR_14 = 2;
          } else if (!VAR_20) {
            if (FUNC_0(&VAR_7->config, "%s%s", VAR_5, ":9222") < 0) {
              VAR_14 = 2;
            }
          } else {
            VAR_7->config = FUNC_9(VAR_5);
          }
        }
        break;
      case 'c':
        FUNC_2(VAR_7->config);
        VAR_7->config = FUNC_9(VAR_5);
        break;
      case 's':
        FUNC_2(VAR_7->sim_wi_socket_addr);
        VAR_7->sim_wi_socket_addr = FUNC_9(VAR_5);
        break;
      case 'f':
      case 'F':
        FUNC_2(VAR_7->frontend);
        VAR_7->frontend = (VAR_15 == 'f' ? FUNC_9(VAR_5) : ((void*)0));
        break;
      case 'd':
        VAR_7->is_debug = 1;
        break;
      default:
        VAR_14 = 2;
        break;
    }
  }

  if (!VAR_14 && ((VAR_8 - VAR_6) > 0)) {
    VAR_14 = 2;
  }

  if (VAR_14 && VAR_14 != -2) {
    char *VAR_21 = FUNC_10(VAR_9[0], '/');
    FUNC_5(
        "Usage: %s [OPTIONS]\n"
        "iOS WebKit Remote Debugging Protocol Proxy v%s.\n"
        "\n"
        "By default, the proxy will list all attached iOS devices on:\n"
        "  http://localhost:9221\n"
        "and assign each device an incremented port number, e.g.:\n"
        "  http://localhost:9222\n"
        "which lists the device's pages and provides inspector access.\n"
        "\n"
        "Your attached iOS device(s) must have the inspector enabled via:\n"
        "  Settings > Safari > Advanced > Web Inspector = ON\n"
        "and have one or more open browser pages.\n"
        "\n"
        "To view the DevTools UI, either use the above links (which use the"
        " \"frontend\"\nURL noted below) or use Chrome's built-in inspector,"
        " e.g.:\n"
        "  chrome-devtools://devtools/bundled/inspector.html?ws=localhost:"
        "9222/devtools/page/1"
        "\n\n"
        "OPTIONS:\n"
        "\n"
        "  -u UDID[:minPort-[maxPort]]\tTarget a specific device by its"
        " digital ID.\n"
        "        minPort defaults to 9222.  maxPort defaults to minPort.\n"
        "        This is shorthand for the following \"-c\" option.\n"
        "\n"
        "  -c, --config CSV\tUDID-to-port(s) configuration.\n"
        "        Defaults to:\n"
        "          %s\n"
        "        which lists devices (\"null:\") on port 9221 and assigns\n"
        "        all other devices (\":\") to the next unused port in the\n"
        "        9222-9322 range, in the (somewhat random) order that the\n"
        "        devices are detected.\n"
        "        The value can be the path to a file in the above format.\n"
        "\n"
        "  -f, --frontend URL\tDevTools frontend UI path or URL.\n"
        "        Defaults to:\n"
        "          %s\n"
        "        Examples:\n"
        "          * Use Chrome's built-in inspector:\n"
        "              chrome-devtools://devtools/bundled/inspector.html\n"
        "          * Use a local WebKit checkout:\n"
        "              /usr/local/WebCore/inspector/front-end/inspector.html\n"
        "          * Use an online copy of the inspector pages:\n"
        "              http://chrome-devtools-frontend.appspot.com/static/"
        "33.0.1722.0"
        "/devtools.html\n"
        "            where other online versions include:\n"
        "              18.0.1025.74\n"
        "              25.0.1364.169\n"
        "              28.0.1501.0\n"
        "              30.0.1599.92\n"
        "              31.0.1651.0\n"
        "              32.0.1689.3\n"
        "\n"
        "  -F, --no-frontend\tDisable the DevTools frontend.\n"
        "\n"
        "  -s, --simulator-webinspector\tSimulator web inspector socket\n"
        "        address. Provided value value needs to be in format\n"
        "        HOSTNAME:PORT or UNIX:PATH\n"
        "        Defaults to:\n"
        "          %s\n"
        "        Examples:\n"
        "          * TCP socket:\n"
        "            192.168.0.20:27753\n"
        "          * Unix domain socket:\n"
        "            unix:/private/tmp/com.apple.launchd.2j5k1TMh6i/"
        "com.apple.webinspectord_sim.socket\n"
        "\n"
        "  -d, --debug\t\tEnable debug output.\n"
        "  -h, --help\t\tPrint this usage information.\n"
        "  -V, --version\t\tPrint version information and exit.\n"
        "\n", (VAR_21 ? VAR_21 + 1 : VAR_9[0]), VAR_3, VAR_11,
      VAR_12, VAR_13);
  }
  return VAR_14;
}
