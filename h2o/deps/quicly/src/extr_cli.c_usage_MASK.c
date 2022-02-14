
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0)
{
    FUNC_0("Usage: %s [options] host port\n"
           "\n"
           "Options:\n"
           "  -a <alpn>                 ALPN identifier; repeat the option to set multiple\n"
           "                            candidates\n"
           "  -C <cid-key>              CID encryption key (server-only). Randomly generated\n"
           "                            if omitted.\n"
           "  -c certificate-file\n"
           "  -k key-file               specifies the credentials to be used for running the\n"
           "                            server. If omitted, the command runs as a client.\n"
           "  -e event-log-file         file to log events\n"
           "  -E                        expand Client Hello (sends multiple client Initials)\n"
           "  -i interval               interval to reissue requests (in milliseconds)\n"
           "  -I timeout                idle timeout (in milliseconds; default: 600,000)\n"
           "  -l log-file               file to log traffic secrets\n"
           "  -M <bytes>                max stream data (in bytes; default: 1MB)\n"
           "  -m <bytes>                max data (in bytes; default: 16MB)\n"
           "  -N                        enforce HelloRetryRequest (client-only)\n"
           "  -n                        enforce version negotiation (client-only)\n"
           "  -p path                   path to request (can be set multiple times)\n"
           "  -P path                   path to request, store response to file (can be set multiple times)\n"
           "  -R                        require Retry (server only)\n"
           "  -r [initial-pto]          initial PTO (in milliseconds)\n"
           "  -S [num-speculative-ptos] number of speculative PTOs\n"
           "  -s session-file           file to load / store the session ticket\n"
           "  -V                        verify peer using the default certificates\n"
           "  -v                        verbose mode (-vv emits packet dumps as well)\n"
           "  -x named-group            named group to be used (default: secp256r1)\n"
           "  -X                        max bidirectional stream count (default: 100)\n"
           "  -h                        print this help\n"
           "\n",
           VAR_0);
}
